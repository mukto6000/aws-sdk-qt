// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkforcesresponse.h"
#include "listworkforcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListWorkforcesResponse
 * \brief The ListWorkforcesResponse class provides an interace for SageMaker ListWorkforces responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listWorkforces
 */

/*!
 * Constructs a ListWorkforcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkforcesResponse::ListWorkforcesResponse(
        const ListWorkforcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListWorkforcesResponsePrivate(this), parent)
{
    setRequest(new ListWorkforcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkforcesRequest * ListWorkforcesResponse::request() const
{
    Q_D(const ListWorkforcesResponse);
    return static_cast<const ListWorkforcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListWorkforces \a response.
 */
void ListWorkforcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkforcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListWorkforcesResponsePrivate
 * \brief The ListWorkforcesResponsePrivate class provides private implementation for ListWorkforcesResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListWorkforcesResponsePrivate object with public implementation \a q.
 */
ListWorkforcesResponsePrivate::ListWorkforcesResponsePrivate(
    ListWorkforcesResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListWorkforces response element from \a xml.
 */
void ListWorkforcesResponsePrivate::parseListWorkforcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkforcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
