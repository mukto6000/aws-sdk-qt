/*
    Copyright 2013-2021 Paul Colby

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

#include "deleteresourcepolicyresponse.h"
#include "deleteresourcepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::DeleteResourcePolicyResponse
 * \brief The DeleteResourcePolicyResponse class provides an interace for MigrationHubRefactorSpaces DeleteResourcePolicy responses.
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 *
 *  <fullname>Amazon Web Services Migration Hub Refactor Spaces</fullname>
 * 
 *  This API reference provides descriptions, syntax, and other details about each of the actions and data types for Amazon
 *  Web Services Migration Hub Refactor Spaces (Refactor Spaces). The topic for each action shows the API request parameters
 *  and the response. Alternatively, you can use one of the Amazon Web Services SDKs to access an API that is tailored to
 *  the programming language or platform that you're using. For more information, see <a
 *  href="https://aws.amazon.com/tools/#SDKs">Amazon Web Services
 * 
 *  SDKs</a>>
 * 
 *  To share Refactor Spaces environments with other Amazon Web Services accounts or with Organizations and their OUs, use
 *  Resource Access Manager's <code>CreateResourceShare</code> API. See <a
 *  href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a> in the
 *  <i>Amazon Web Services RAM API
 *
 * \sa MigrationHubRefactorSpacesClient::deleteResourcePolicy
 */

/*!
 * Constructs a DeleteResourcePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResourcePolicyResponse::DeleteResourcePolicyResponse(
        const DeleteResourcePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubRefactorSpacesResponse(new DeleteResourcePolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteResourcePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResourcePolicyRequest * DeleteResourcePolicyResponse::request() const
{
    Q_D(const DeleteResourcePolicyResponse);
    return static_cast<const DeleteResourcePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubRefactorSpaces DeleteResourcePolicy \a response.
 */
void DeleteResourcePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResourcePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::DeleteResourcePolicyResponsePrivate
 * \brief The DeleteResourcePolicyResponsePrivate class provides private implementation for DeleteResourcePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a DeleteResourcePolicyResponsePrivate object with public implementation \a q.
 */
DeleteResourcePolicyResponsePrivate::DeleteResourcePolicyResponsePrivate(
    DeleteResourcePolicyResponse * const q) : MigrationHubRefactorSpacesResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubRefactorSpaces DeleteResourcePolicy response element from \a xml.
 */
void DeleteResourcePolicyResponsePrivate::parseDeleteResourcePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourcePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
