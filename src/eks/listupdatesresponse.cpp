// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listupdatesresponse.h"
#include "listupdatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Eks {

/*!
 * \class QtAws::Eks::ListUpdatesResponse
 * \brief The ListUpdatesResponse class provides an interace for Eks ListUpdates responses.
 *
 * \inmodule QtAwsEks
 *
 *  Amazon Elastic Kubernetes Service (Amazon EKS) is a managed service that makes it easy for you to run Kubernetes on
 *  Amazon Web Services without needing to stand up or maintain your own Kubernetes control plane. Kubernetes is an
 *  open-source system for automating the deployment, scaling, and management of containerized applications.
 * 
 *  </p
 * 
 *  Amazon EKS runs up-to-date versions of the open-source Kubernetes software, so you can use all the existing plugins and
 *  tooling from the Kubernetes community. Applications running on Amazon EKS are fully compatible with applications running
 *  on any standard Kubernetes environment, whether running in on-premises data centers or public clouds. This means that
 *  you can easily migrate any standard Kubernetes application to Amazon EKS without any code modification
 *
 * \sa EksClient::listUpdates
 */

/*!
 * Constructs a ListUpdatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListUpdatesResponse::ListUpdatesResponse(
        const ListUpdatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EksResponse(new ListUpdatesResponsePrivate(this), parent)
{
    setRequest(new ListUpdatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUpdatesRequest * ListUpdatesResponse::request() const
{
    Q_D(const ListUpdatesResponse);
    return static_cast<const ListUpdatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Eks ListUpdates \a response.
 */
void ListUpdatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUpdatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Eks::ListUpdatesResponsePrivate
 * \brief The ListUpdatesResponsePrivate class provides private implementation for ListUpdatesResponse.
 * \internal
 *
 * \inmodule QtAwsEks
 */

/*!
 * Constructs a ListUpdatesResponsePrivate object with public implementation \a q.
 */
ListUpdatesResponsePrivate::ListUpdatesResponsePrivate(
    ListUpdatesResponse * const q) : EksResponsePrivate(q)
{

}

/*!
 * Parses a Eks ListUpdates response element from \a xml.
 */
void ListUpdatesResponsePrivate::parseListUpdatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUpdatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Eks
} // namespace QtAws
