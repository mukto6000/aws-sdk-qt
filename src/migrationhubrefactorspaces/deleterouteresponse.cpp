// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterouteresponse.h"
#include "deleterouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::DeleteRouteResponse
 * \brief The DeleteRouteResponse class provides an interace for MigrationHubRefactorSpaces DeleteRoute responses.
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
 * \sa MigrationHubRefactorSpacesClient::deleteRoute
 */

/*!
 * Constructs a DeleteRouteResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRouteResponse::DeleteRouteResponse(
        const DeleteRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubRefactorSpacesResponse(new DeleteRouteResponsePrivate(this), parent)
{
    setRequest(new DeleteRouteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRouteRequest * DeleteRouteResponse::request() const
{
    Q_D(const DeleteRouteResponse);
    return static_cast<const DeleteRouteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubRefactorSpaces DeleteRoute \a response.
 */
void DeleteRouteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRouteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::DeleteRouteResponsePrivate
 * \brief The DeleteRouteResponsePrivate class provides private implementation for DeleteRouteResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a DeleteRouteResponsePrivate object with public implementation \a q.
 */
DeleteRouteResponsePrivate::DeleteRouteResponsePrivate(
    DeleteRouteResponse * const q) : MigrationHubRefactorSpacesResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubRefactorSpaces DeleteRoute response element from \a xml.
 */
void DeleteRouteResponsePrivate::parseDeleteRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRouteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
