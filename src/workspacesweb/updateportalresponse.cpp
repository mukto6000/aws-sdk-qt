// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateportalresponse.h"
#include "updateportalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::UpdatePortalResponse
 * \brief The UpdatePortalResponse class provides an interace for WorkSpacesWeb UpdatePortal responses.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::updatePortal
 */

/*!
 * Constructs a UpdatePortalResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePortalResponse::UpdatePortalResponse(
        const UpdatePortalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesWebResponse(new UpdatePortalResponsePrivate(this), parent)
{
    setRequest(new UpdatePortalRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePortalRequest * UpdatePortalResponse::request() const
{
    Q_D(const UpdatePortalResponse);
    return static_cast<const UpdatePortalRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpacesWeb UpdatePortal \a response.
 */
void UpdatePortalResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePortalResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpacesWeb::UpdatePortalResponsePrivate
 * \brief The UpdatePortalResponsePrivate class provides private implementation for UpdatePortalResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a UpdatePortalResponsePrivate object with public implementation \a q.
 */
UpdatePortalResponsePrivate::UpdatePortalResponsePrivate(
    UpdatePortalResponse * const q) : WorkSpacesWebResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpacesWeb UpdatePortal response element from \a xml.
 */
void UpdatePortalResponsePrivate::parseUpdatePortalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePortalResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpacesWeb
} // namespace QtAws
