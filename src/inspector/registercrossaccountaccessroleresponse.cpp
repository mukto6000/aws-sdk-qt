/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "registercrossaccountaccessroleresponse.h"
#include "registercrossaccountaccessroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::RegisterCrossAccountAccessRoleResponse
 * \brief The RegisterCrossAccountAccessRoleResponse class provides an interace for Inspector RegisterCrossAccountAccessRole responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::registerCrossAccountAccessRole
 */

/*!
 * Constructs a RegisterCrossAccountAccessRoleResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterCrossAccountAccessRoleResponse::RegisterCrossAccountAccessRoleResponse(
        const RegisterCrossAccountAccessRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new RegisterCrossAccountAccessRoleResponsePrivate(this), parent)
{
    setRequest(new RegisterCrossAccountAccessRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterCrossAccountAccessRoleRequest * RegisterCrossAccountAccessRoleResponse::request() const
{
    Q_D(const RegisterCrossAccountAccessRoleResponse);
    return static_cast<const RegisterCrossAccountAccessRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector RegisterCrossAccountAccessRole \a response.
 */
void RegisterCrossAccountAccessRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterCrossAccountAccessRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::RegisterCrossAccountAccessRoleResponsePrivate
 * \brief The RegisterCrossAccountAccessRoleResponsePrivate class provides private implementation for RegisterCrossAccountAccessRoleResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a RegisterCrossAccountAccessRoleResponsePrivate object with public implementation \a q.
 */
RegisterCrossAccountAccessRoleResponsePrivate::RegisterCrossAccountAccessRoleResponsePrivate(
    RegisterCrossAccountAccessRoleResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector RegisterCrossAccountAccessRole response element from \a xml.
 */
void RegisterCrossAccountAccessRoleResponsePrivate::parseRegisterCrossAccountAccessRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterCrossAccountAccessRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
