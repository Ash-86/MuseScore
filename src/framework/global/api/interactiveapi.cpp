/*
 * SPDX-License-Identifier: GPL-3.0-only
 * MuseScore-CLA-applies
 *
 * MuseScore
 * Music Composition & Notation
 *
 * Copyright (C) 2021 MuseScore BVBA and others
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#include <QUrl>

#include "interactiveapi.h"

using namespace muse::api;

/** APIDOC namespace: interactive
 * User interaction - informational messages, error messages, questions and other dialogs.
 * @namespace
 */

InteractiveApi::InteractiveApi(IApiEngine* e)
    : ApiObject(e)
{
}

/** APIDOC method
 * Show information message
 * @param {String} title Title
 * @param {String} text Message
 */

void InteractiveApi::info(const QString& contentTitle, const QString& text)
{
    interactive()->infoSync(contentTitle.toStdString(), text.toStdString());
}

/** APIDOC method
 * Open URL in external browser
 * @param {String} url URL
 */
void InteractiveApi::openUrl(const QString& url)
{
    interactive()->openUrl(QUrl(url));
}
