// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomaincontactresponse.h"
#include "updatedomaincontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::UpdateDomainContactResponse
 * \brief The UpdateDomainContactResponse class provides an interace for Route53Domains UpdateDomainContact responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::updateDomainContact
 */

/*!
 * Constructs a UpdateDomainContactResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDomainContactResponse::UpdateDomainContactResponse(
        const UpdateDomainContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new UpdateDomainContactResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDomainContactRequest * UpdateDomainContactResponse::request() const
{
    Q_D(const UpdateDomainContactResponse);
    return static_cast<const UpdateDomainContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains UpdateDomainContact \a response.
 */
void UpdateDomainContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDomainContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::UpdateDomainContactResponsePrivate
 * \brief The UpdateDomainContactResponsePrivate class provides private implementation for UpdateDomainContactResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a UpdateDomainContactResponsePrivate object with public implementation \a q.
 */
UpdateDomainContactResponsePrivate::UpdateDomainContactResponsePrivate(
    UpdateDomainContactResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains UpdateDomainContact response element from \a xml.
 */
void UpdateDomainContactResponsePrivate::parseUpdateDomainContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
